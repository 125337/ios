@interface WCFinderFollowBtnViewModel : NSObject <WCFinderContactExt>
{
    BOOL _isPrivate; // +0x8
    unsigned long long _followState; // +0x10
    WCFinderContact * _contact; // +0x18
}
- (void)updateWithContact:(id)arg1;
- (void)setContact:(id)arg1;
- (BOOL)isSelfContact;
- (unsigned long long)nextFollowAction;
- (void)dealloc;
- (void)postChangeFollowStateRequest;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (unsigned long long)followState;
- (void)setFollowState:(unsigned long long)arg1;
- (BOOL)isPrivate;
- (void)setIsPrivate:(BOOL)arg1;
- (id)contact;
- (void).cxx_destruct;
@end

