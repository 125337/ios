@interface WCPayWordingItem : NSObject
{
    BOOL needShow; // +0x8
    NSString * entryTip; // +0x10
    NSString * title; // +0x18
    NSString * desc; // +0x20
    NSString * subTitle; // +0x28
    NSString * subDesc; // +0x30
}
- (id)init;
- (id)entryTip;
- (void)setEntryTip:(id)arg1;
- (BOOL)needShow;
- (void)setNeedShow:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)subDesc;
- (void)setSubDesc:(id)arg1;
- (void).cxx_destruct;
@end

