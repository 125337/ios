@interface WCFinderPersonalContactSession : NSObject <WCFinderPersonalContactModelExt>
{
    WCFinderPersonalContactModel * _model; // +0x8
    NSMutableArray * _mutItems; // +0x10
}
+ (id)sessionWithContactModel:(id)arg1;
- (id)init;
- (id)items;
- (void)onRedDotInfoChanged;
- (id)itemWithTag:(long long)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (id)mutItems;
- (void)setMutItems:(id)arg1;
- (void).cxx_destruct;
@end
