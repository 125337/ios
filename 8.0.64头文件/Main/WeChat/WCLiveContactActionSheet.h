@interface WCLiveContactActionSheet : WCLiveActionSheet <WCActionSheetDelegate>
{
    id <WCLiveContactActionSheetDelegate> _liveContactActionSheetDelegate; // +0x8
    MMHeadImageView * _headImageView; // +0x10
    MMCPLabel * _nickNameLabel; // +0x18
    WCFinderContact * _finderContact; // +0x20
}
+ (id)addTransparencyViewWith:(id)arg1 targetView:(id)arg2;
- (id)getCustomHeadView;
- (void)updateFinderContact:(id)arg1;
- (BOOL)isFinderUser;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)liveContactActionSheetDelegate;
- (void)setLiveContactActionSheetDelegate:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)finderContact;
- (void)setFinderContact:(id)arg1;
- (void).cxx_destruct;
@end
