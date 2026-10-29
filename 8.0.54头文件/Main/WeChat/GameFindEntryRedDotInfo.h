@interface GameFindEntryRedDotInfo : NSObject
{
    BOOL _isRedPointExposured; // +0x8
    BOOL _isRedPointCompleteExposured; // +0x9
    BOOL _isRedPointHalfExposured; // +0xa
    GameCenterBaseMsg * _gameCenterMsg; // +0x10
    GameLifeFindMoreFriendEntranceInfo * _gameLifeInfo; // +0x18
}
- (id)getGameCenterMsg;
- (id)getGameLifeInfo;
- (void)setGameCenterMsg:(id)arg1;
- (void)setGameLifeInfo:(id)arg1;
- (BOOL)isRedPointExposured;
- (void)setIsRedPointExposured:(BOOL)arg1;
- (BOOL)isRedPointCompleteExposured;
- (void)setIsRedPointCompleteExposured:(BOOL)arg1;
- (BOOL)isRedPointHalfExposured;
- (void)setIsRedPointHalfExposured:(BOOL)arg1;
- (void).cxx_destruct;
@end

