@interface MMQRCodeMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
{
    NSMutableSet * m_downloadSet; // +0x8
    NSMutableSet * m_newDesignDownloadSet; // +0x10
    NSMutableSet * m_revokeQRCodeSet; // +0x18
    NSArray * _arrColorCodeStartColor; // +0x20
    NSArray * _arrColorCodeEndColor; // +0x28
}
- (id)init;
- (void)initData;
- (void)dealloc;
- (id)getQRCodeImagePath:(id)arg1;
- (id)getQRCodeStylePath:(id)arg1;
- (id)getQRCodeConfigPath:(id)arg1;
- (id)getNewDesignContactQRCodePageModePath:(id)arg1;
- (id)getNewDesignContactQRCodeDominatorColorsPath:(id)arg1;
- (id)getNewDesignContactQRCodeImagePath:(id)arg1 type:(unsigned long long)arg2;
- (id)getNewDesignContactQRCodeWithStyleImagePath:(id)arg1 type:(unsigned long long)arg2;
- (id)getNewDesignContactQRCodeUrlPath:(id)arg1 type:(unsigned long long)arg2;
- (id)getQRCodeConfig:(id)arg1;
- (unsigned int)getCurStyle:(id)arg1;
- (void)getQRCodeFromServer:(id)arg1 withStyle:(unsigned int)arg2 withOpCode:(unsigned int)arg3;
- (void)p_getQRCodeFromServer:(id)arg1 withStyle:(unsigned int)arg2 withOpCode:(unsigned int)arg3;
- (void)getOpenIMChatRoomQRCodeFromServer:(id)arg1;
- (void)getQRCodeFromServer:(id)arg1 withStyle:(unsigned int)arg2;
- (void)refreshQRCode:(id)arg1;
- (id)getQRCode:(id)arg1 pullIfNotExist:(BOOL)arg2;
- (BOOL)revokeChatRoomQRCode:(id)arg1 qrcode:(id)arg2;
- (BOOL)revokeChatRoomQRCode:(id)arg1 qrcode:(id)arg2 scene:(unsigned int)arg3;
- (BOOL)p_revokeChatRoomQRCode:(id)arg1 qrcode:(id)arg2 scene:(unsigned int)arg3;
- (BOOL)revokeOpenIMChatRoomQRCode:(id)arg1 qrcode:(id)arg2;
- (void)setHasShowRevokeTip:(id)arg1 TipID:(id)arg2;
- (BOOL)getChatRoomQRCodeStatus:(id)arg1 arrQRCode:(id)arg2;
- (void)revokeNewDesignContactQRCode:(id)arg1;
- (void)getNewDesignContactQRCodeFromServer:(id)arg1;
- (void)p_getNewDesignContactQRCodeFromServer:(id)arg1 withOpCode:(unsigned int)arg2;
- (void)p_getNewDesignContactQRCodeFromServer:(id)arg1 withImageType:(unsigned long long)arg2 withOpCode:(unsigned int)arg3;
- (id)getNewDesignContactQRCode:(id)arg1 type:(unsigned long long)arg2 isChatRoom:(BOOL)arg3;
- (id)getNewDesignContactQRCodeDominatorColors:(id)arg1;
- (unsigned int)getCurrentNewDesignContactQRCodePageMode:(id)arg1;
- (void)updateNewDesignContactQRCodePageMode:(id)arg1 pageMode:(unsigned int)arg2;
- (unsigned int)transformToNewDesignPageMode:(unsigned short)arg1;
- (void)showQrCodeImageViewColorCode:(unsigned int)arg1 targetImageViewImageView:(id)arg2 image:(id)arg3;
- (void)applyGradientColorLayerIntoImageView:(id)arg1 image:(id)arg2 startColor:(id)arg3 endColor:(id)arg4;
- (void)handleGetQRCodeResponse:(id)arg1;
- (id)buildLocalGenPersonalQRCodeUrlWithStyle:(unsigned long long)arg1 originQrCodeUrl:(id)arg2;
- (long long)getPersonalQRCodeUrlStyleValue:(unsigned long long)arg1;
- (void)handleGetNewDesignContactQRCodeResponse:(id)arg1;
- (void)handleRevokeChatrommQRCodeResponse:(id)arg1;
- (void)handleGetOpenIMChatRoomQRCodeResponse:(id)arg1;
- (void)handleRevokeOpenIMChatrommQRCodeResponse:(id)arg1;
- (void)handleGetChatRoomQRCodeStatusResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)localGenPersonalQRCodeDominatorColor:(id)arg1;
- (void)genAndSaveChatRoomQRCodeImage:(id)arg1 url:(id)arg2 serverReturnedImageData:(id)arg3;
- (void)genAndSavePersonalQRCodeImage:(id)arg1 url:(id)arg2;
- (void)genAndSavePersonalQrCdoeImage:(id)arg1 type:(unsigned long long)arg2 url:(id)arg3;
- (void)genAndSaveQRCodeImage:(id)arg1 type:(unsigned long long)arg2 url:(id)arg3 isChatRoom:(BOOL)arg4;
- (id)localGenQRCodeImage:(id)arg1 type:(unsigned long long)arg2 url:(id)arg3;
- (int)getEcLevelForUrl:(id)arg1;
- (QBarImageInfo)getQBarImageInfoForUIImage:(id)arg1;
- (void)freePersonalParam:(PersonalParam)arg1;
- (void)freeQBarImageInfo:(QBarImageInfo)arg1;
- (void)setPersonalQRCodeUrl:(id)arg1;
- (id)getPersonalQRCodeUrl;
- (id)getPersonalQRCodeUrlMMKVID;
- (id)arrColorCodeStartColor;
- (void)setArrColorCodeStartColor:(id)arg1;
- (id)arrColorCodeEndColor;
- (void)setArrColorCodeEndColor:(id)arg1;
- (void).cxx_destruct;
@end
