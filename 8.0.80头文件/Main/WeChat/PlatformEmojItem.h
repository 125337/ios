@interface PlatformEmojItem : NSObject
{
    BOOL _isGif; // +0x8
    long long _type; // +0x10
    NSString * _originPath; // +0x18
    NSString * _thumbPath; // +0x20
    PlatformEmojSize * _thumbSize; // +0x28
    PlatformEmojSize * _originSize; // +0x30
    NSString * _mediaId; // +0x38
    long long _durationMs; // +0x40
}
+ (id)makeWithType:(long long)arg1 originPath:(id)arg2 thumbPath:(id)arg3 thumbSize:(id)arg4 originSize:(id)arg5 mediaId:(id)arg6 durationMs:(long long)arg7 isGif:(BOOL)arg8;
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
- (BOOL)isGif;
- (void)setIsGif:(BOOL)arg1;
- (void).cxx_destruct;
@end
