/*
 *  Design Pattern - Composite 合成模式
 * 
 * 這個範例展示了 Component、Leaf 和 Composite 三個類別的概念。
 * Client 通過 Component 介面操作單個物件和組合物件，而不需要知道具體實現類別的細節。
 * Composite 類別可以添加和移除子部件，並在 Operation 方法中遞迴調用所有子部件的 Operation 方法。
 */

#include <iostream>
#include <vector>

/*
 * Component - 定義了單個物件和組合物件的通用介面.
 */
class Component {
public:
    virtual void Operation() const = 0;
};

/*
 * Leaf - 表示單個物件，實現 Component 介面.
 */
class Leaf : public Component {
public:
    void Operation() const override {
        std::cout << "Leaf: Performing operation." << std::endl;
    }
};

/*
 * Composite - 表示組合物件，實現 Component 介面，並且可以添加和移除子部件.
 */
class Composite : public Component {
private:
    std::vector<Component*> components;

public:
    void Operation() const override {
        std::cout << "Composite: Performing operation." << std::endl;

        // 遞迴地調用所有子部件的 Operation 方法.
        for (Component* component : components) {
            component->Operation();
        }
    }

    void Add(Component* component) {
        components.push_back(component);
    }

    void Remove(Component* component) {
        // 在 components 向量中找到並移除指定的子部件.
        components.erase(std::remove(components.begin(), components.end(), component), components.end());
    }
};

/*
 * Client - 通過 Component 介面操作單個物件和組合物件，而不需要知道具體實現類別的細節.
 */
int main() {
    Component* leaf1 = new Leaf();
    Component* leaf2 = new Leaf();
    Component* leaf3 = new Leaf();

    Composite* composite = new Composite();
    composite->Add(leaf1);
    composite->Add(leaf2);

    Composite* composite2 = new Composite();
    composite2->Add(composite);
    composite2->Add(leaf3);

    composite2->Operation();

    delete composite2;

    return 0;
}
