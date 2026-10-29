@interface QMCSSECraftAdapter : NSObject
+ (id)extractCraftPayloadFromEvent:(id)arg1 error:(id *)arg2;
+ (BOOL)isTerminalEvent:(id)arg1;
+ (id)_normalizePayload:(id)arg1;
+ (id)_dictionaryFromUnknown:(id)arg1;
+ (id)_jsonObjectFrom:(id)arg1;
+ (id)_craftDataStringWithCraftResult:(id)arg1;
@end
