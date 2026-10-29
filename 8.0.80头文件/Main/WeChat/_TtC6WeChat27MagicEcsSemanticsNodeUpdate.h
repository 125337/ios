@interface _TtC6WeChat27MagicEcsSemanticsNodeUpdate : NSObject
{
    long long id; // +0x8
    long long flags; // +0x10
    long long actions; // +0x18
    long long maxValueLength; // +0x20
    long long currentValueLength; // +0x28
    long long textSelectionBase; // +0x30
    long long textSelectionExtent; // +0x38
    long long platformViewId; // +0x40
    long long scrollChildren; // +0x48
    long long scrollIndex; // +0x50
    float scrollPosition; // +0x58
    float scrollExtentMax; // +0x5c
    float scrollExtentMin; // +0x60
    _TtC6WeChat12MagicEcsRect * rect; // +0x68
    void * identifier; // +0x70
    void * label; // +0x80
    void * labelAttributes; // +0x90
    void * hint; // +0x98
    void * hintAttributes; // +0xa8
    void * value; // +0xb0
    void * valueAttributes; // +0xc0
    void * increasedValue; // +0xc8
    void * increasedValueAttributes; // +0xd8
    void * decreasedValue; // +0xe0
    void * decreasedValueAttributes; // +0xf0
    void * tooltip; // +0xf8
     textDirection; // +0x108
    void * transform; // +0x110
    void * childrenInTraversalOrder; // +0x118
    void * childrenInHitTestOrder; // +0x120
    void * additionalActions; // +0x128
    float elevation; // +0x130
    float thickness; // +0x134
    long long headingLevel; // +0x138
    void * linkUrl; // +0x140
    long long role; // +0x150
    void * controlsNodes; // +0x158
    void * customAccessibilityActions; // +0x160
}
+ (id)fromJson:(id)arg1;
- (long long)id;
- (long long)flags;
- (long long)actions;
- (long long)maxValueLength;
- (long long)currentValueLength;
- (long long)textSelectionBase;
- (long long)textSelectionExtent;
- (long long)platformViewId;
- (long long)scrollChildren;
- (long long)scrollIndex;
- (float)scrollPosition;
- (float)scrollExtentMax;
- (float)scrollExtentMin;
- (id)rect;
- (id)identifier;
- (id)label;
- (id)labelAttributes;
- (id)hint;
- (id)hintAttributes;
- (id)value;
- (id)valueAttributes;
- (id)increasedValue;
- (id)increasedValueAttributes;
- (id)decreasedValue;
- (id)decreasedValueAttributes;
- (id)tooltip;
- (id)transform;
- (id)childrenInTraversalOrder;
- (id)childrenInHitTestOrder;
- (id)additionalActions;
- (float)elevation;
- (float)thickness;
- (long long)headingLevel;
- (id)linkUrl;
- (long long)role;
- (id)controlsNodes;
- (id)customAccessibilityActions;
- (id)init;
- (void).cxx_destruct;
@end
