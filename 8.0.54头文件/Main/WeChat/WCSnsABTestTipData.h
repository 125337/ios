@interface WCSnsABTestTipData : NSObject
{
    NSMutableArray * arrActionItem; // +0x8
    NSString * tipIndex; // +0x10
    int showType; // +0x18
    WCSnsABTestTitle * abtestTitle; // +0x20
}
- (id)init;
- (long long)compareTipAscending:(id)arg1;
- (id)description;
- (id)arrActionItem;
- (void)setArrActionItem:(id)arg1;
- (id)tipIndex;
- (void)setTipIndex:(id)arg1;
- (int)showType;
- (void)setShowType:(int)arg1;
- (id)abtestTitle;
- (void)setAbtestTitle:(id)arg1;
- (void).cxx_destruct;
@end

