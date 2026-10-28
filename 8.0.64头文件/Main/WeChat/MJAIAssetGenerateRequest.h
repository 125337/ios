@interface MJAIAssetGenerateRequest : NSObject
{
    NSArray * _originAssetURLs; // +0x8
    NSString * _clientID; // +0x10
    NSData * _aigcBuffer; // +0x18
}
- (id)initWithOriginAssetURLs:(id)arg1;
- (id)originAssetURLs;
- (id)clientID;
- (void)setClientID:(id)arg1;
- (id)aigcBuffer;
- (void)setAigcBuffer:(id)arg1;
- (void).cxx_destruct;
@end
