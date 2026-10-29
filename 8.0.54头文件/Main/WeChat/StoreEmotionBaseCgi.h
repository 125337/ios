@interface StoreEmotionBaseCgi : WCBaseCgi
{
    BOOL _hasConfigDebugModelName; // +0x8
}
- (id)init;
- (BOOL)isRequesting;
- (id)debugModuleName;
- (void)setDebugModuleName:(id)arg1;
- (BOOL)startRequestWithRequest:(id)arg1;
- (BOOL)hasConfigDebugModelName;
- (void)setHasConfigDebugModelName:(BOOL)arg1;
@end

