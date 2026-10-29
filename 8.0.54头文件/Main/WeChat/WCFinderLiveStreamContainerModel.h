@interface WCFinderLiveStreamContainerModel : NSObject
{
    BOOL _enableDoubleFlowStyle; // +0x8
    int _type; // +0xc
    unsigned int _nextPagePullType; // +0x10
    unsigned long long _containerId; // +0x18
    NSString * _name; // +0x20
    NSString * _iconUrl; // +0x28
    NSMutableArray * _elementModelList; // +0x30
    unsigned long long _continueFlag; // +0x38
    NSMutableArray * _wordingColors; // +0x40
    NSData * _containerLastBuffer; // +0x48
    unsigned long long _countRestrict; // +0x50
    WCFinderLiveTabInfo * _jumpTabInfo; // +0x58
    FinderThemeLiveContainerInfo * _themeLiveContainerInfo; // +0x60
    FinderLiveTabListContainerInfo * _liveTabListContainerInfo; // +0x68
}
+ (id)finderLiveStreamContainerModelFrom:(id)arg1;
- (id)toFinderLiveStreamContainer;
- (id)firstJumpModel;
- (unsigned long long)containerId;
- (void)setContainerId:(unsigned long long)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)elementModelList;
- (void)setElementModelList:(id)arg1;
- (unsigned long long)continueFlag;
- (void)setContinueFlag:(unsigned long long)arg1;
- (id)wordingColors;
- (void)setWordingColors:(id)arg1;
- (id)containerLastBuffer;
- (void)setContainerLastBuffer:(id)arg1;
- (unsigned long long)countRestrict;
- (void)setCountRestrict:(unsigned long long)arg1;
- (id)jumpTabInfo;
- (void)setJumpTabInfo:(id)arg1;
- (id)themeLiveContainerInfo;
- (void)setThemeLiveContainerInfo:(id)arg1;
- (id)liveTabListContainerInfo;
- (void)setLiveTabListContainerInfo:(id)arg1;
- (BOOL)enableDoubleFlowStyle;
- (void)setEnableDoubleFlowStyle:(BOOL)arg1;
- (unsigned int)nextPagePullType;
- (void)setNextPagePullType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

