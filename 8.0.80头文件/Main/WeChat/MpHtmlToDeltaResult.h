@interface MpHtmlToDeltaResult : NSObject
{
    NSArray * _ops; // +0x8
    NSArray * _customBlockList; // +0x10
    NSArray * _customBlockPoiList; // +0x18
    NSArray * _customInlineBlockLinkList; // +0x20
}
- (id)ops;
- (void)setOps:(id)arg1;
- (id)customBlockList;
- (void)setCustomBlockList:(id)arg1;
- (id)customBlockPoiList;
- (void)setCustomBlockPoiList:(id)arg1;
- (id)customInlineBlockLinkList;
- (void)setCustomInlineBlockLinkList:(id)arg1;
- (void).cxx_destruct;
@end
