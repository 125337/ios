@interface MidasWechatPayScoreSignContent : NSObject <_TtP11MidasPayKit16MidasSignContent_>
{
     ecOfferID; // +0x8
     ecSubOfferID; // +0x18
     contractMethod; // +0x28
     wxAppID; // +0x30
     customDomain; // +0x40
     type; // +0x50
}
- (long long)type;
- (id)initWithEcOfferID:(id)arg1 ecSubOfferID:(id)arg2 contractMethod:(long long)arg3 wxAppID:(id)arg4 customDomain:(id)arg5;
- (BOOL)validate;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
