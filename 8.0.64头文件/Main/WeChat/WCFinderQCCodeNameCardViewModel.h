@interface WCFinderQCCodeNameCardViewModel : NSObject <WCFinderContactExt>
{
    WCFinderContact * _contact; // +0x8
    NSString * _username; // +0x10
}
- (id)initWithUsername:(id)arg1;
- (id)authInfo;
- (void)onFinderContactUpdate:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (void).cxx_destruct;
@end
