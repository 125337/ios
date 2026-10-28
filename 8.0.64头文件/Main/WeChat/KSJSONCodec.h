@interface KSJSONCodec : NSObject
{
    BOOL _prettyPrint; // +0x8
    BOOL _sorted; // +0x9
    BOOL _ignoreNullsInArrays; // +0xa
    BOOL _ignoreNullsInObjects; // +0xb
    id _topLevelContainer; // +0x10
    id _currentContainer; // +0x18
    NSMutableArray * _containerStack; // +0x20
    KSJSONDecodeCallbacks * _callbacks; // +0x28
    NSMutableData * _serializedData; // +0x30
    NSError * _error; // +0x38
}
+ (id)codecWithEncodeOptions:(int)arg1 decodeOptions:(int)arg2;
+ (id)encode:(id)arg1 options:(int)arg2 error:(id *)arg3;
+ (id)decode:(id)arg1 options:(int)arg2 error:(id *)arg3;
- (id)initWithEncodeOptions:(int)arg1 decodeOptions:(int)arg2;
- (void)dealloc;
- (id)topLevelContainer;
- (void)setTopLevelContainer:(id)arg1;
- (id)currentContainer;
- (void)setCurrentContainer:(id)arg1;
- (id)containerStack;
- (void)setContainerStack:(id)arg1;
- (KSJSONDecodeCallbacks *)callbacks;
- (void)setCallbacks:(KSJSONDecodeCallbacks *)arg1;
- (id)serializedData;
- (void)setSerializedData:(id)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (BOOL)prettyPrint;
- (void)setPrettyPrint:(BOOL)arg1;
- (BOOL)sorted;
- (void)setSorted:(BOOL)arg1;
- (BOOL)ignoreNullsInArrays;
- (void)setIgnoreNullsInArrays:(BOOL)arg1;
- (BOOL)ignoreNullsInObjects;
- (void)setIgnoreNullsInObjects:(BOOL)arg1;
- (void).cxx_destruct;
@end
