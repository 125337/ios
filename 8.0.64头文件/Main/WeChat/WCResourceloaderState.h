@interface WCResourceloaderState : NSObject
{
    BOOL _bLiklyInResourceloaderBug; // +0x8
    BOOL _bBugOccurAfterSeek; // +0x9
    BOOL _bRecoverChecked; // +0xa
    BOOL _bResetToSystemPlayer; // +0xb
    unsigned int _bugOccurTime; // +0xc
    unsigned int _seekTime; // +0x10
    float _resourceloaderRespSec; // +0x14
}
- (void)setBLiklyInResourceloaderBug:(BOOL)arg1;
- (void)setBResetToSystemPlayer:(BOOL)arg1;
- (void)resetIndicators;
- (void)resourceloaderliklyInBugState;
- (BOOL)shouldCheckRecoverStateWithPreloadSec:(float)arg1;
- (BOOL)bLiklyInResourceloaderBug;
- (BOOL)bBugOccurAfterSeek;
- (void)setBBugOccurAfterSeek:(BOOL)arg1;
- (unsigned int)bugOccurTime;
- (void)setBugOccurTime:(unsigned int)arg1;
- (unsigned int)seekTime;
- (void)setSeekTime:(unsigned int)arg1;
- (BOOL)bRecoverChecked;
- (void)setBRecoverChecked:(BOOL)arg1;
- (BOOL)bResetToSystemPlayer;
- (float)resourceloaderRespSec;
- (void)setResourceloaderRespSec:(float)arg1;
@end
