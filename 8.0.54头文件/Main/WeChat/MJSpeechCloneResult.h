@interface MJSpeechCloneResult : MJSpeechRequestResult
{
    NSString * _roleID; // +0x8
    NSDictionary * _extraInfos; // +0x10
}
- (id)initWithRoleID:(id)arg1 extraInfos:(id)arg2;
- (id)description;
- (id)roleID;
- (id)extraInfos;
- (void).cxx_destruct;
@end

