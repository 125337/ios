@interface WCMomentsAssetOperation : NSObject <NSCopying>
{
    MMAssetInfo * _assetInfo; // +0x8
    long long _assetSource; // +0x10
    long long _operationType; // +0x18
}
- (id)initWithAssetInfo:(id)arg1 byType:(long long)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)assetInfo;
- (void)setAssetInfo:(id)arg1;
- (long long)assetSource;
- (void)setAssetSource:(long long)arg1;
- (long long)operationType;
- (void)setOperationType:(long long)arg1;
- (void).cxx_destruct;
@end

