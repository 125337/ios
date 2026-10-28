@interface FavEmoticonItem : FavoritesModel
{
    BOOL _showRewardTips; // +0x8
    unsigned int _uiEmoticonType; // +0xc
    unsigned int _uiGameType; // +0x10
    unsigned int _uiGameContent; // +0x14
    unsigned int _uiEmoticonWidth; // +0x18
    unsigned int _uiEmoticonHeight; // +0x1c
    NSString * _md5; // +0x20
    NSString * _productId; // +0x28
    NSString * _cdnUrlString; // +0x30
    NSString * _encryptUrlString; // +0x38
    NSString * _aesKey; // +0x40
    NSString * _externUrl; // +0x48
    NSString * _externMd5; // +0x50
    NSString * _designerId; // +0x58
    NSString * _activityId; // +0x60
    NSString * _linkId; // +0x68
    NSString * _thumbImgUrl; // +0x70
    NSString * _tpUrlString; // +0x78
    NSString * _authkey; // +0x80
    NSString * _attachedText; // +0x88
    NSString * _attachedTextColor; // +0x90
    NSString * _lensId; // +0x98
    NSString * _emoticonSvrDescStr; // +0xa0
}
- (id)md5;
- (void)setMd5:(id)arg1;
- (unsigned int)uiEmoticonType;
- (void)setUiEmoticonType:(unsigned int)arg1;
- (unsigned int)uiGameType;
- (void)setUiGameType:(unsigned int)arg1;
- (unsigned int)uiGameContent;
- (void)setUiGameContent:(unsigned int)arg1;
- (id)productId;
- (void)setProductId:(id)arg1;
- (id)cdnUrlString;
- (void)setCdnUrlString:(id)arg1;
- (id)encryptUrlString;
- (void)setEncryptUrlString:(id)arg1;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (id)externUrl;
- (void)setExternUrl:(id)arg1;
- (id)externMd5;
- (void)setExternMd5:(id)arg1;
- (id)designerId;
- (void)setDesignerId:(id)arg1;
- (id)activityId;
- (void)setActivityId:(id)arg1;
- (id)linkId;
- (void)setLinkId:(id)arg1;
- (id)thumbImgUrl;
- (void)setThumbImgUrl:(id)arg1;
- (BOOL)showRewardTips;
- (void)setShowRewardTips:(BOOL)arg1;
- (unsigned int)uiEmoticonWidth;
- (void)setUiEmoticonWidth:(unsigned int)arg1;
- (unsigned int)uiEmoticonHeight;
- (void)setUiEmoticonHeight:(unsigned int)arg1;
- (id)tpUrlString;
- (void)setTpUrlString:(id)arg1;
- (id)authkey;
- (void)setAuthkey:(id)arg1;
- (id)attachedText;
- (void)setAttachedText:(id)arg1;
- (id)attachedTextColor;
- (void)setAttachedTextColor:(id)arg1;
- (id)lensId;
- (void)setLensId:(id)arg1;
- (id)emoticonSvrDescStr;
- (void)setEmoticonSvrDescStr:(id)arg1;
- (void).cxx_destruct;
@end
