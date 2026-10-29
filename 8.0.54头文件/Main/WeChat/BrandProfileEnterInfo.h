@interface BrandProfileEnterInfo : NSObject
{
    BOOL _isFromFinder; // +0x8
    BOOL _scrollToTab; // +0x9
    unsigned int _enterScene; // +0xc
    unsigned int _userType; // +0x10
    unsigned int _qrCodeScene; // +0x14
    unsigned int _sessionType; // +0x18
    unsigned int _productId; // +0x1c
    int _scanSubScene; // +0x20
    unsigned int _finderSubScene; // +0x24
    int _bizFromScene; // +0x28
    unsigned int _openArticleFromScene; // +0x2c
    NSString * _sendUser; // +0x30
    NSString * _chatUser; // +0x38
    NSString * _firstUrl; // +0x40
    NSString * _lastUrl; // +0x48
    NSString * _searchKeyword; // +0x50
    CMessageWrap * _sourceMessage; // +0x58
    unsigned long long _brandTLRecCardId; // +0x60
    NSString * _channelSessionId; // +0x68
    NSString * _sceneNote; // +0x70
    NSString * _finderBuffer; // +0x78
    NSString * _finderExtraData; // +0x80
    unsigned long long _tabType; // +0x88
    NSDictionary * _brandFinderJumpInfoDic; // +0x90
    NSString * _luckMoneySpringEventUrl; // +0x98
    unsigned long long _pageMode; // +0xa0
    NSDictionary * _dictRawEnterInfo; // +0xa8
}
- (id)init;
- (void)updateInfoFromCardMessage:(id)arg1;
- (void)updateInfoFromWebViewController:(id)arg1;
- (void)updateInfoFromWAHTMLWebViewController:(id)arg1;
- (void)updateChatUserType;
- (unsigned int)enterScene;
- (void)setEnterScene:(unsigned int)arg1;
- (unsigned int)userType;
- (void)setUserType:(unsigned int)arg1;
- (unsigned int)qrCodeScene;
- (void)setQrCodeScene:(unsigned int)arg1;
- (id)sendUser;
- (void)setSendUser:(id)arg1;
- (id)chatUser;
- (void)setChatUser:(id)arg1;
- (id)firstUrl;
- (void)setFirstUrl:(id)arg1;
- (id)lastUrl;
- (void)setLastUrl:(id)arg1;
- (id)searchKeyword;
- (void)setSearchKeyword:(id)arg1;
- (id)sourceMessage;
- (void)setSourceMessage:(id)arg1;
- (unsigned int)sessionType;
- (void)setSessionType:(unsigned int)arg1;
- (unsigned long long)brandTLRecCardId;
- (void)setBrandTLRecCardId:(unsigned long long)arg1;
- (id)channelSessionId;
- (void)setChannelSessionId:(id)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (unsigned int)productId;
- (void)setProductId:(unsigned int)arg1;
- (id)finderBuffer;
- (void)setFinderBuffer:(id)arg1;
- (id)finderExtraData;
- (void)setFinderExtraData:(id)arg1;
- (unsigned long long)tabType;
- (void)setTabType:(unsigned long long)arg1;
- (int)scanSubScene;
- (void)setScanSubScene:(int)arg1;
- (id)brandFinderJumpInfoDic;
- (void)setBrandFinderJumpInfoDic:(id)arg1;
- (unsigned int)finderSubScene;
- (void)setFinderSubScene:(unsigned int)arg1;
- (BOOL)isFromFinder;
- (void)setIsFromFinder:(BOOL)arg1;
- (id)luckMoneySpringEventUrl;
- (void)setLuckMoneySpringEventUrl:(id)arg1;
- (unsigned long long)pageMode;
- (void)setPageMode:(unsigned long long)arg1;
- (BOOL)scrollToTab;
- (void)setScrollToTab:(BOOL)arg1;
- (int)bizFromScene;
- (void)setBizFromScene:(int)arg1;
- (unsigned int)openArticleFromScene;
- (void)setOpenArticleFromScene:(unsigned int)arg1;
- (id)dictRawEnterInfo;
- (void)setDictRawEnterInfo:(id)arg1;
- (void).cxx_destruct;
@end

