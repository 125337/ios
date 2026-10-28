@interface WCFinderProductShareViewBuilder : NSObject
{
    WCFinderProductShareViewBuildConfig * _config; // +0x8
    WCFinderLiveProductShareItem * _item; // +0x10
}
- (double)titleHightForText:(id)arg1 firstLineWidth:(double)arg2 singleLine:(BOOL)arg3;
- (void)setConfig:(id)arg1;
- (double)buildInCanvas:(id)arg1;
- (double)estimateHeightForWidth:(double)arg1;
- (id)config;
- (id)item;
- (void)setItem:(id)arg1;
- (void).cxx_destruct;
@end
