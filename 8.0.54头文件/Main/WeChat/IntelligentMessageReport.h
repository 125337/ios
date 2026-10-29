@interface IntelligentMessageReport : MMObject
{
    BOOL _isPopUp; // +0x8
    unsigned int _action; // +0xc
    unsigned int _scene; // +0x10
    unsigned int _searchScene; // +0x14
    unsigned int _imageCnt; // +0x18
    unsigned int _peopleCnt; // +0x1c
    unsigned int _imageSendTime; // +0x20
    unsigned int _tab; // +0x24
    unsigned int _searchCost; // +0x28
    unsigned int _ifImageDone; // +0x2c
    unsigned int _matchType; // +0x30
    unsigned int _mediaResultType; // +0x34
    unsigned int _finderCnt; // +0x38
    unsigned int _categoryDisplayType; // +0x3c
    unsigned int _stayTime; // +0x40
    NSString * _sessionId; // +0x48
    NSString * _searchSessionId; // +0x50
    NSString * _printQuery; // +0x58
    NSString * _searchQuery; // +0x60
    NSString * _expoQuery; // +0x68
    NSString * _keyWord; // +0x70
    NSString * _userName; // +0x78
    unsigned long long _imageAllCount; // +0x80
}
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)searchSessionId;
- (void)setSearchSessionId:(id)arg1;
- (unsigned int)action;
- (void)setAction:(unsigned int)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)printQuery;
- (void)setPrintQuery:(id)arg1;
- (id)searchQuery;
- (void)setSearchQuery:(id)arg1;
- (id)expoQuery;
- (void)setExpoQuery:(id)arg1;
- (id)keyWord;
- (void)setKeyWord:(id)arg1;
- (unsigned int)searchScene;
- (void)setSearchScene:(unsigned int)arg1;
- (unsigned int)imageCnt;
- (void)setImageCnt:(unsigned int)arg1;
- (unsigned int)peopleCnt;
- (void)setPeopleCnt:(unsigned int)arg1;
- (unsigned int)imageSendTime;
- (void)setImageSendTime:(unsigned int)arg1;
- (unsigned int)tab;
- (void)setTab:(unsigned int)arg1;
- (unsigned int)searchCost;
- (void)setSearchCost:(unsigned int)arg1;
- (unsigned int)ifImageDone;
- (void)setIfImageDone:(unsigned int)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned long long)imageAllCount;
- (void)setImageAllCount:(unsigned long long)arg1;
- (unsigned int)matchType;
- (void)setMatchType:(unsigned int)arg1;
- (BOOL)isPopUp;
- (void)setIsPopUp:(BOOL)arg1;
- (unsigned int)mediaResultType;
- (void)setMediaResultType:(unsigned int)arg1;
- (unsigned int)finderCnt;
- (void)setFinderCnt:(unsigned int)arg1;
- (unsigned int)categoryDisplayType;
- (void)setCategoryDisplayType:(unsigned int)arg1;
- (unsigned int)stayTime;
- (void)setStayTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

