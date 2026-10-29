@interface _TtC6WeChat21MagicEcsSemanticsNode : NSObject
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
- (long long)id;
- (long long)flags;
- (void)setFlags:(long long)arg1;
- (long long)actions;
- (void)setActions:(long long)arg1;
- (long long)maxValueLength;
- (void)setMaxValueLength:(long long)arg1;
- (long long)currentValueLength;
- (void)setCurrentValueLength:(long long)arg1;
- (long long)textSelectionBase;
- (void)setTextSelectionBase:(long long)arg1;
- (long long)textSelectionExtent;
- (void)setTextSelectionExtent:(long long)arg1;
- (long long)platformViewId;
- (void)setPlatformViewId:(long long)arg1;
- (long long)scrollChildren;
- (void)setScrollChildren:(long long)arg1;
- (long long)scrollIndex;
- (void)setScrollIndex:(long long)arg1;
- (float)scrollPosition;
- (void)setScrollPosition:(float)arg1;
- (float)scrollExtentMax;
- (void)setScrollExtentMax:(float)arg1;
- (float)scrollExtentMin;
- (void)setScrollExtentMin:(float)arg1;
- (id)rect;
- (void)setRect:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)labelAttributes;
- (void)setLabelAttributes:(id)arg1;
- (id)hint;
- (void)setHint:(id)arg1;
- (id)hintAttributes;
- (void)setHintAttributes:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (id)valueAttributes;
- (void)setValueAttributes:(id)arg1;
- (id)increasedValue;
- (void)setIncreasedValue:(id)arg1;
- (id)increasedValueAttributes;
- (void)setIncreasedValueAttributes:(id)arg1;
- (id)decreasedValue;
- (void)setDecreasedValue:(id)arg1;
- (id)decreasedValueAttributes;
- (void)setDecreasedValueAttributes:(id)arg1;
- (id)tooltip;
- (void)setTooltip:(id)arg1;
- (id)transform;
- (void)setTransform:(id)arg1;
- (id)childrenInTraversalOrder;
- (void)setChildrenInTraversalOrder:(id)arg1;
- (id)childrenInHitTestOrder;
- (void)setChildrenInHitTestOrder:(id)arg1;
- (id)additionalActions;
- (void)setAdditionalActions:(id)arg1;
- (float)elevation;
- (void)setElevation:(float)arg1;
- (float)thickness;
- (void)setThickness:(float)arg1;
- (long long)headingLevel;
- (void)setHeadingLevel:(long long)arg1;
- (id)linkUrl;
- (void)setLinkUrl:(id)arg1;
- (long long)role;
- (void)setRole:(long long)arg1;
- (id)controlsNodes;
- (void)setControlsNodes:(id)arg1;
- (id)customAccessibilityActions;
- (void)setCustomAccessibilityActions:(id)arg1;
- (id)initFrom:(id)arg1;
- (void)updateFrom:(id)arg1;
- (BOOL)hasFlag:(long long)arg1;
- (BOOL)isButton;
- (BOOL)isTextField;
- (BOOL)isEnabled;
- (BOOL)isFocused;
- (BOOL)isFocusable;
- (BOOL)isChecked;
- (BOOL)isToggled;
- (BOOL)isHeader;
- (BOOL)isLink;
- (BOOL)isImage;
- (BOOL)isSlider;
- (BOOL)isScrollable;
- (BOOL)isExpanded;
- (BOOL)isSelected;
- (BOOL)isHidden;
- (BOOL)isReadOnly;
- (BOOL)isMultiline;
- (BOOL)isObscured;
- (BOOL)hasAction:(long long)arg1;
- (BOOL)isTappable;
- (BOOL)isLongPressable;
- (BOOL)isScrollableAction;
- (id)init;
- (void).cxx_destruct;
@end
