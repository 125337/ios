@interface WeDropCachedSendInfo : MMObject
{
    BOOL _locked; // +0x8
    unsigned long long _type; // +0x10
    NSMutableArray * _fileInfos; // +0x18
    NSArray * _assetInfos; // +0x20
    NSMutableArray * _contentInfos; // +0x28
    unsigned long long _startTime; // +0x30
}
- (id)init;
- (BOOL)isExpired;
- (BOOL)locked;
- (void)setLocked:(BOOL)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)fileInfos;
- (void)setFileInfos:(id)arg1;
- (id)assetInfos;
- (void)setAssetInfos:(id)arg1;
- (id)contentInfos;
- (void)setContentInfos:(id)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
