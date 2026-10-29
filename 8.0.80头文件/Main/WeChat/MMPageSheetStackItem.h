@interface MMPageSheetStackItem : NSObject
{
    long long _style; // +0x8
    id <MMPageSheetContentProtocol> _pageSheet; // +0x10
    UIView * _bottomExtendView; // +0x18
    UIView * _frontMaskView; // +0x20
}
- (void)updateWithStyle:(long long)arg1 multiPage:(BOOL)arg2 animated:(BOOL)arg3;
- (long long)style;
- (void)setStyle:(long long)arg1;
- (id)pageSheet;
- (void)setPageSheet:(id)arg1;
- (id)bottomExtendView;
- (void)setBottomExtendView:(id)arg1;
- (id)frontMaskView;
- (void)setFrontMaskView:(id)arg1;
- (void).cxx_destruct;
@end
