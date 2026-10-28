@interface MJTTSRequestParams : MJSpeechRequestParams
{
    NSString * _text; // +0x8
    NSString * _roleID; // +0x10
}
- (id)initWithText:(id)arg1 roleID:(id)arg2;
- (id)description;
- (id)text;
- (id)roleID;
- (void).cxx_destruct;
@end
