@interface WNSearchCoverView : UIView
{
    BOOL _hasSetDisplay; // +0x8
    NSMutableDictionary * _coverInfos; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)drawRect:(CGRect)arg1;
- (void)drawRectWith:(id)arg1;
- (BOOL)hasSetDisplay;
- (void)setHasSetDisplay:(BOOL)arg1;
- (id)coverInfos;
- (void)setCoverInfos:(id)arg1;
- (void).cxx_destruct;
@end

