@interface WCCanvasReportInfo : MMObject
{
    unsigned int _entranceType; // +0x8
    unsigned int _exitType; // +0xc
    unsigned int _entranceScene; // +0x10
    unsigned int _entranceCanvasCount; // +0x14
    unsigned int _entranceSameCanvasCount; // +0x18
    unsigned int _enableSwipeRight; // +0x1c
    unsigned int _swipeRightCount; // +0x20
    unsigned int _componentCount; // +0x24
    unsigned int _shareSnsCount; // +0x28
    unsigned int _shareFriendCount; // +0x2c
    unsigned int _favCount; // +0x30
    unsigned int _originScene; // +0x34
    NSString * _snsId; // +0x38
    NSString * _uxInfo; // +0x40
    NSString * _sharedUxinfo; // +0x48
    unsigned long long _stayTime; // +0x50
    NSString * _componentsStatStr; // +0x58
    unsigned long long _enterTimeStamp; // +0x60
    NSString * _snsStatExt; // +0x68
    NSString * _expId; // +0x70
    NSDictionary * _extraInfo; // +0x78
    unsigned long long _canvasId; // +0x80
    NSString * _viewId; // +0x88
}
- (id)genStatString;
- (id)snsId;
- (void)setSnsId:(id)arg1;
- (id)uxInfo;
- (void)setUxInfo:(id)arg1;
- (id)sharedUxinfo;
- (void)setSharedUxinfo:(id)arg1;
- (unsigned int)entranceType;
- (void)setEntranceType:(unsigned int)arg1;
- (unsigned int)exitType;
- (void)setExitType:(unsigned int)arg1;
- (unsigned int)entranceScene;
- (void)setEntranceScene:(unsigned int)arg1;
- (unsigned int)entranceCanvasCount;
- (void)setEntranceCanvasCount:(unsigned int)arg1;
- (unsigned int)entranceSameCanvasCount;
- (void)setEntranceSameCanvasCount:(unsigned int)arg1;
- (unsigned int)enableSwipeRight;
- (void)setEnableSwipeRight:(unsigned int)arg1;
- (unsigned int)swipeRightCount;
- (void)setSwipeRightCount:(unsigned int)arg1;
- (unsigned int)componentCount;
- (void)setComponentCount:(unsigned int)arg1;
- (unsigned long long)stayTime;
- (void)setStayTime:(unsigned long long)arg1;
- (unsigned int)shareSnsCount;
- (void)setShareSnsCount:(unsigned int)arg1;
- (unsigned int)shareFriendCount;
- (void)setShareFriendCount:(unsigned int)arg1;
- (unsigned int)favCount;
- (void)setFavCount:(unsigned int)arg1;
- (id)componentsStatStr;
- (void)setComponentsStatStr:(id)arg1;
- (unsigned long long)enterTimeStamp;
- (void)setEnterTimeStamp:(unsigned long long)arg1;
- (id)snsStatExt;
- (void)setSnsStatExt:(id)arg1;
- (id)expId;
- (void)setExpId:(id)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (unsigned int)originScene;
- (void)setOriginScene:(unsigned int)arg1;
- (unsigned long long)canvasId;
- (void)setCanvasId:(unsigned long long)arg1;
- (id)viewId;
- (void)setViewId:(id)arg1;
- (void).cxx_destruct;
@end

