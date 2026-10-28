@interface YGStyle : NSObject
{
    id /* block */ _addItem; // +0x8
    id /* block */ _addSpacer; // +0x10
    id /* block */ _addStack; // +0x18
    id /* block */ _define; // +0x20
    id /* block */ _isIncludedInLayout; // +0x28
    id /* block */ _direction; // +0x30
    id /* block */ _flexDirection; // +0x38
    id /* block */ _justifyContent; // +0x40
    id /* block */ _alignContent; // +0x48
    id /* block */ _alignItems; // +0x50
    id /* block */ _alignSelf; // +0x58
    id /* block */ _position; // +0x60
    id /* block */ _flexWrap; // +0x68
    id /* block */ _overflow; // +0x70
    id /* block */ _display; // +0x78
    id /* block */ _flexGrow; // +0x80
    id /* block */ _flexShrink; // +0x88
    id /* block */ _flexBasis; // +0x90
    id /* block */ _left; // +0x98
    id /* block */ _leftPercent; // +0xa0
    id /* block */ _top; // +0xa8
    id /* block */ _topPercent; // +0xb0
    id /* block */ _right; // +0xb8
    id /* block */ _rightPercent; // +0xc0
    id /* block */ _bottom; // +0xc8
    id /* block */ _bottomPercent; // +0xd0
    id /* block */ _start; // +0xd8
    id /* block */ _startPercent; // +0xe0
    id /* block */ _end; // +0xe8
    id /* block */ _endPercent; // +0xf0
    id /* block */ _all; // +0xf8
    id /* block */ _allPercent; // +0x100
    id /* block */ _marginTop; // +0x108
    id /* block */ _marginTopPercent; // +0x110
    id /* block */ _marginLeft; // +0x118
    id /* block */ _marginLeftPercent; // +0x120
    id /* block */ _marginBottom; // +0x128
    id /* block */ _marginBottomPercent; // +0x130
    id /* block */ _marginRight; // +0x138
    id /* block */ _marginRightPercent; // +0x140
    id /* block */ _marginStart; // +0x148
    id /* block */ _marginStartPercent; // +0x150
    id /* block */ _marginEnd; // +0x158
    id /* block */ _marginEndPercent; // +0x160
    id /* block */ _marginHorizontal; // +0x168
    id /* block */ _marginHorizontalPercent; // +0x170
    id /* block */ _marginVertical; // +0x178
    id /* block */ _marginVerticalPercent; // +0x180
    id /* block */ _margin; // +0x188
    id /* block */ _marginPercent; // +0x190
    id /* block */ _marginInsets; // +0x198
    id /* block */ _paddingTop; // +0x1a0
    id /* block */ _paddingTopPercent; // +0x1a8
    id /* block */ _paddingLeft; // +0x1b0
    id /* block */ _paddingLeftPercent; // +0x1b8
    id /* block */ _paddingBottom; // +0x1c0
    id /* block */ _paddingBottomPercent; // +0x1c8
    id /* block */ _paddingRight; // +0x1d0
    id /* block */ _paddingRightPercent; // +0x1d8
    id /* block */ _paddingStart; // +0x1e0
    id /* block */ _paddingStartPercent; // +0x1e8
    id /* block */ _paddingEnd; // +0x1f0
    id /* block */ _paddingEndPercent; // +0x1f8
    id /* block */ _paddingHorizontal; // +0x200
    id /* block */ _paddingHorizontalPercent; // +0x208
    id /* block */ _paddingVertical; // +0x210
    id /* block */ _paddingVerticalPercent; // +0x218
    id /* block */ _padding; // +0x220
    id /* block */ _paddingPercent; // +0x228
    id /* block */ _paddingInsets; // +0x230
    id /* block */ _size; // +0x238
    id /* block */ _width; // +0x240
    id /* block */ _widthPercent; // +0x248
    id /* block */ _height; // +0x250
    id /* block */ _heightPercent; // +0x258
    id /* block */ _minWidth; // +0x260
    id /* block */ _minWidthPercent; // +0x268
    id /* block */ _minHeight; // +0x270
    id /* block */ _minHeightPercent; // +0x278
    id /* block */ _maxWidth; // +0x280
    id /* block */ _maxWidthPercent; // +0x288
    id /* block */ _maxHeight; // +0x290
    id /* block */ _maxHeightPercent; // +0x298
    id /* block */ _aspectRatio; // +0x2a0
    id /* block */ _backgroundColor; // +0x2a8
    id /* block */ _cornerRadius; // +0x2b0
    id /* block */ _userInteractionEnabled; // +0x2b8
    UIView * _view; // +0x2c0
}
- (id)initWithView:(id)arg1;
- (void)layout;
- (void)layout:(long long)arg1;
- (void)markDirty;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id /* block */)addItem;
- (id /* block */)addSpacer;
- (id /* block */)addStack;
- (id /* block */)define;
- (id /* block */)isIncludedInLayout;
- (id /* block */)direction;
- (id /* block */)flexDirection;
- (id /* block */)justifyContent;
- (id /* block */)alignContent;
- (id /* block */)alignItems;
- (id /* block */)alignSelf;
- (id /* block */)position;
- (id /* block */)flexWrap;
- (id /* block */)overflow;
- (id /* block */)display;
- (id /* block */)flexGrow;
- (id /* block */)flexShrink;
- (id /* block */)flexBasis;
- (id /* block */)left;
- (id /* block */)leftPercent;
- (id /* block */)top;
- (id /* block */)topPercent;
- (id /* block */)right;
- (id /* block */)rightPercent;
- (id /* block */)bottom;
- (id /* block */)bottomPercent;
- (id /* block */)start;
- (id /* block */)startPercent;
- (id /* block */)end;
- (id /* block */)endPercent;
- (id /* block */)all;
- (id /* block */)allPercent;
- (id /* block */)marginTop;
- (id /* block */)marginTopPercent;
- (id /* block */)marginLeft;
- (id /* block */)marginLeftPercent;
- (id /* block */)marginBottom;
- (id /* block */)marginBottomPercent;
- (id /* block */)marginRight;
- (id /* block */)marginRightPercent;
- (id /* block */)marginStart;
- (id /* block */)marginStartPercent;
- (id /* block */)marginEnd;
- (id /* block */)marginEndPercent;
- (id /* block */)marginHorizontal;
- (id /* block */)marginHorizontalPercent;
- (id /* block */)marginVertical;
- (id /* block */)marginVerticalPercent;
- (id /* block */)margin;
- (id /* block */)marginPercent;
- (id /* block */)marginInsets;
- (id /* block */)paddingTop;
- (id /* block */)paddingTopPercent;
- (id /* block */)paddingLeft;
- (id /* block */)paddingLeftPercent;
- (id /* block */)paddingBottom;
- (id /* block */)paddingBottomPercent;
- (id /* block */)paddingRight;
- (id /* block */)paddingRightPercent;
- (id /* block */)paddingStart;
- (id /* block */)paddingStartPercent;
- (id /* block */)paddingEnd;
- (id /* block */)paddingEndPercent;
- (id /* block */)paddingHorizontal;
- (id /* block */)paddingHorizontalPercent;
- (id /* block */)paddingVertical;
- (id /* block */)paddingVerticalPercent;
- (id /* block */)padding;
- (id /* block */)paddingPercent;
- (id /* block */)paddingInsets;
- (id /* block */)size;
- (id /* block */)width;
- (id /* block */)widthPercent;
- (id /* block */)height;
- (id /* block */)heightPercent;
- (id /* block */)minWidth;
- (id /* block */)minWidthPercent;
- (id /* block */)minHeight;
- (id /* block */)minHeightPercent;
- (id /* block */)maxWidth;
- (id /* block */)maxWidthPercent;
- (id /* block */)maxHeight;
- (id /* block */)maxHeightPercent;
- (id /* block */)aspectRatio;
- (id /* block */)backgroundColor;
- (id /* block */)cornerRadius;
- (id /* block */)userInteractionEnabled;
- (void)setAddItem:(id /* block */)arg1;
- (void)setAddSpacer:(id /* block */)arg1;
- (void)setAddStack:(id /* block */)arg1;
- (void)setDefine:(id /* block */)arg1;
- (void)setIsIncludedInLayout:(id /* block */)arg1;
- (void)setDirection:(id /* block */)arg1;
- (void)setFlexDirection:(id /* block */)arg1;
- (void)setJustifyContent:(id /* block */)arg1;
- (void)setAlignContent:(id /* block */)arg1;
- (void)setAlignItems:(id /* block */)arg1;
- (void)setAlignSelf:(id /* block */)arg1;
- (void)setPosition:(id /* block */)arg1;
- (void)setFlexWrap:(id /* block */)arg1;
- (void)setOverflow:(id /* block */)arg1;
- (void)setDisplay:(id /* block */)arg1;
- (void)setFlexGrow:(id /* block */)arg1;
- (void)setFlexShrink:(id /* block */)arg1;
- (void)setFlexBasis:(id /* block */)arg1;
- (void)setLeft:(id /* block */)arg1;
- (void)setLeftPercent:(id /* block */)arg1;
- (void)setTop:(id /* block */)arg1;
- (void)setTopPercent:(id /* block */)arg1;
- (void)setRight:(id /* block */)arg1;
- (void)setRightPercent:(id /* block */)arg1;
- (void)setBottom:(id /* block */)arg1;
- (void)setBottomPercent:(id /* block */)arg1;
- (void)setStart:(id /* block */)arg1;
- (void)setStartPercent:(id /* block */)arg1;
- (void)setEnd:(id /* block */)arg1;
- (void)setEndPercent:(id /* block */)arg1;
- (void)setAll:(id /* block */)arg1;
- (void)setAllPercent:(id /* block */)arg1;
- (void)setMarginTop:(id /* block */)arg1;
- (void)setMarginTopPercent:(id /* block */)arg1;
- (void)setMarginLeft:(id /* block */)arg1;
- (void)setMarginLeftPercent:(id /* block */)arg1;
- (void)setMarginBottom:(id /* block */)arg1;
- (void)setMarginBottomPercent:(id /* block */)arg1;
- (void)setMarginRight:(id /* block */)arg1;
- (void)setMarginRightPercent:(id /* block */)arg1;
- (void)setMarginStart:(id /* block */)arg1;
- (void)setMarginStartPercent:(id /* block */)arg1;
- (void)setMarginEnd:(id /* block */)arg1;
- (void)setMarginEndPercent:(id /* block */)arg1;
- (void)setMarginHorizontal:(id /* block */)arg1;
- (void)setMarginHorizontalPercent:(id /* block */)arg1;
- (void)setMarginVertical:(id /* block */)arg1;
- (void)setMarginVerticalPercent:(id /* block */)arg1;
- (void)setMargin:(id /* block */)arg1;
- (void)setMarginPercent:(id /* block */)arg1;
- (void)setMarginInsets:(id /* block */)arg1;
- (void)setPaddingTop:(id /* block */)arg1;
- (void)setPaddingTopPercent:(id /* block */)arg1;
- (void)setPaddingLeft:(id /* block */)arg1;
- (void)setPaddingLeftPercent:(id /* block */)arg1;
- (void)setPaddingBottom:(id /* block */)arg1;
- (void)setPaddingBottomPercent:(id /* block */)arg1;
- (void)setPaddingRight:(id /* block */)arg1;
- (void)setPaddingRightPercent:(id /* block */)arg1;
- (void)setPaddingStart:(id /* block */)arg1;
- (void)setPaddingStartPercent:(id /* block */)arg1;
- (void)setPaddingEnd:(id /* block */)arg1;
- (void)setPaddingEndPercent:(id /* block */)arg1;
- (void)setPaddingHorizontal:(id /* block */)arg1;
- (void)setPaddingHorizontalPercent:(id /* block */)arg1;
- (void)setPaddingVertical:(id /* block */)arg1;
- (void)setPaddingVerticalPercent:(id /* block */)arg1;
- (void)setPadding:(id /* block */)arg1;
- (void)setPaddingPercent:(id /* block */)arg1;
- (void)setPaddingInsets:(id /* block */)arg1;
- (void)setSize:(id /* block */)arg1;
- (void)setWidth:(id /* block */)arg1;
- (void)setWidthPercent:(id /* block */)arg1;
- (void)setHeight:(id /* block */)arg1;
- (void)setHeightPercent:(id /* block */)arg1;
- (void)setMinWidth:(id /* block */)arg1;
- (void)setMinWidthPercent:(id /* block */)arg1;
- (void)setMinHeight:(id /* block */)arg1;
- (void)setMinHeightPercent:(id /* block */)arg1;
- (void)setMaxWidth:(id /* block */)arg1;
- (void)setMaxWidthPercent:(id /* block */)arg1;
- (void)setMaxHeight:(id /* block */)arg1;
- (void)setMaxHeightPercent:(id /* block */)arg1;
- (void)setAspectRatio:(id /* block */)arg1;
- (void)setBackgroundColor:(id /* block */)arg1;
- (void)setCornerRadius:(id /* block */)arg1;
- (void)setUserInteractionEnabled:(id /* block */)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (void).cxx_destruct;
@end
