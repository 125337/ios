@interface WCFinderJumpNativeInfoVideoParams : NSObject
{
    BOOL _forbidGetRelatedList; // +0x8
    NSString * _finderUsername; // +0x10
    NSString * _objectId; // +0x18
    NSString * _objectNonceId; // +0x20
    unsigned long long _getRelatedListScene; // +0x28
    NSString * _jumpInfoBypassInfo; // +0x30
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)objectId;
- (void)setObjectId:(id)arg1;
- (id)objectNonceId;
- (void)setObjectNonceId:(id)arg1;
- (BOOL)forbidGetRelatedList;
- (void)setForbidGetRelatedList:(BOOL)arg1;
- (unsigned long long)getRelatedListScene;
- (void)setGetRelatedListScene:(unsigned long long)arg1;
- (id)jumpInfoBypassInfo;
- (void)setJumpInfoBypassInfo:(id)arg1;
- (void).cxx_destruct;
@end

