@interface MMFinderLivePrizeConfigTextItem : NSObject
{
    BOOL _highLighted; // +0x8
    NSString * _title; // +0x10
    NSString * _detail; // +0x18
    NSString * _hoverInfo; // +0x20
}
- (id)title;
- (void)setTitle:(id)arg1;
- (id)detail;
- (void)setDetail:(id)arg1;
- (id)hoverInfo;
- (void)setHoverInfo:(id)arg1;
- (BOOL)highLighted;
- (void)setHighLighted:(BOOL)arg1;
- (void).cxx_destruct;
@end
