@interface LiteAppJsApiEmoticonPatchGetEmotionList : LiteAppJsApi <EmoticonListCgiDelegate>
{
    EmoticonListCgi * _cgi; // +0x20
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (void)onGetResponse:(id)arg1;
- (void)onGetListFailedForReqType:(unsigned int)arg1;
- (id)cgi;
- (void)setCgi:(id)arg1;
- (void).cxx_destruct;
@end
