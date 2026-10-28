@interface StoreEmotionDesignerInfoMgr : MMUserService <StoreEmotionGetDesignerSimpleInfoCgiDelegate, StoreEmotionGetEmotionActivityCgiDelegate, StoreEmoticonGetDesignerAcctInfoCgiDelegate, MMServiceProtocol>
{
    NSMutableDictionary * m_getDesignerSimpleInfoCgiDic; // +0x8
    NSMutableDictionary * _designerIdDecodeDic; // +0x10
    NSMutableDictionary * _getDesignerAcctInfoCgiDic; // +0x18
    NSMutableDictionary * _getDesignerBlockDic; // +0x20
}
- (void)onServiceInit;
- (void)askForDesignerForDesignerId:(id)arg1;
- (void)askForDesignerForDesignerId:(id)arg1 isForced:(BOOL)arg2;
- (void)askForDesignerForDesignerId:(id)arg1 isForced:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (void)askForDesignerWithDesignerUin:(unsigned int)arg1;
- (void)askForDesignerWithDesignerUin:(unsigned int)arg1 isForced:(BOOL)arg2;
- (void)askForDesignerWithDesignerUin:(unsigned int)arg1 isForced:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (id)getDesignerWithDesignerId:(id)arg1;
- (id)getDesignerWithDesignerUin:(unsigned int)arg1;
- (BOOL)updateDesignerInfo:(id)arg1;
- (BOOL)updateDesignerInfo:(id)arg1 AndneedCallExt:(BOOL)arg2;
- (void)askForActivityForActivityId:(id)arg1 md5:(id)arg2 linkId:(id)arg3;
- (id)askCacheForActivity:(id)arg1;
- (id)askCacheForLink:(id)arg1 md5:(id)arg2;
- (BOOL)isActivityDegradedFor:(id)arg1;
- (id)designerIdDecodeDic;
- (id)loadDesignerIdDecodeDic;
- (void)saveDesignerIdDecoderDic:(id)arg1;
- (void)askForDesignerUseCgiForDesignerId:(id)arg1;
- (void)askForDesignerUseCgiWithDesignerUin:(unsigned int)arg1;
- (void)onGetDesignerSimpleInfoCgiOkWithDesignerId:(id)arg1 PersonalDesigner:(id)arg2;
- (void)onGetDesignerSimpleInfoCgiOkWithDesignerId:(id)arg1 previewEmotion:(id)arg2 previewEmoji:(id)arg3;
- (void)onGetDesignerSimpleInfoCgiFailedWithDesignerId:(id)arg1;
- (void)onGetEmotionActivityCgiFinished:(id)arg1 activity:(id)arg2 link:(id)arg3;
- (void)onGetDesignerAcctInfoFailWithDeisignerUin:(unsigned int)arg1;
- (void)onGetDesignerAcctInfoOKWithDeisignerUin:(unsigned int)arg1 PersonalDesigner:(id)arg2;
- (void)onGetDesignerAcctInfoFailWithDesignerId:(id)arg1;
- (void)onGetDesignerAcctInfoOKWithDesignerId:(id)arg1 PersonalDesigner:(id)arg2;
- (void)setDesignerIdDecodeDic:(id)arg1;
- (id)getDesignerAcctInfoCgiDic;
- (void)setGetDesignerAcctInfoCgiDic:(id)arg1;
- (id)getDesignerBlockDic;
- (void)setGetDesignerBlockDic:(id)arg1;
- (void).cxx_destruct;
@end
