@interface SWMidasUser : NSObject
{
     offerID; // +0x8
     openID; // +0x18
     openKey; // +0x28
     sessionID; // +0x38
     sessionType; // +0x48
     platform; // +0x58
     platformKey; // +0x68
     originalUserInfo; // +0x78
}
- (id)offerID;
- (id)openID;
- (id)openKey;
- (id)sessionID;
- (id)sessionType;
- (id)platform;
- (id)platformKey;
- (id)originalUserInfo;
- (BOOL)validate;
- (id)initWithOfferID:(id)arg1 openID:(id)arg2 openKey:(id)arg3 sessionID:(id)arg4 sessionType:(id)arg5 platform:(id)arg6 platformKey:(id)arg7 originalUserInfo:(id)arg8;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
