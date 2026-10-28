@interface PlatformEmojItem : NSObject
{
    long long _type; // +0x8
    NSString * _originPath; // +0x10
    NSString * _thumbPath; // +0x18
    PlatformEmojSize * _thumbSize; // +0x20
    PlatformEmojSize * _originSize; // +0x28
    NSString * _mediaId; // +0x30
    long long _durationMs; // +0x38
}
+ (id)makeWithType:(long long)arg1 originPath:(id)arg2 thumbPath:(id)arg3 thumbSize:(id)arg4 originSize:(id)arg5 mediaId:(id)arg6 durationMs:(long long)arg7;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)originPath;
- (void)setOriginPath:(id)arg1;
- (id)thumbPath;
- (void)setThumbPath:(id)arg1;
- (id)thumbSize;
- (void)setThumbSize:(id)arg1;
- (id)originSize;
- (void)setOriginSize:(id)arg1;
- (id)mediaId;
- (void)setMediaId:(id)arg1;
- (long long)durationMs;
- (void)setDurationMs:(long long)arg1;
- (void).cxx_destruct;
@end
