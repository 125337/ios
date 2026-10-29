@interface WCFinderAutoLockDirectionMgr : NSObject
{
    NSString * _portraitLockTipShownContextID; // +0x8
    NSString * _portraitLockedContextID; // +0x10
}
- (BOOL)canShowPortraitLockTipForLandscapeStayTimeMs:(unsigned long long)arg1 triggeredByRotateButton:(BOOL)arg2;
- (void)markPortraitLockTipShown;
- (void)lockPortrait;
- (BOOL)unlockPortrait;
- (BOOL)isPortraitLocked;
- (id)currentContextID;
- (id)portraitLockTipShownContextID;
- (void)setPortraitLockTipShownContextID:(id)arg1;
- (id)portraitLockedContextID;
- (void)setPortraitLockedContextID:(id)arg1;
- (void).cxx_destruct;
@end
