@interface TPPlayerVideo : NSObject <NSCopying>
{
    long long _startPosUs; // +0x8
    long long _skipEndPosUs; // +0x10
    long long _businessID; // +0x18
    NSString * _source; // +0x20
    TPDrmMediaAsset * _drmAsset; // +0x28
    NSMutableArray * _slices; // +0x30
    id <TPPlayerVideoPrivateDelegate> _privateDelegate; // +0x38
}
- (id)init;
- (void)dealloc;
- (id)initWithSlice:(id)arg1;
- (id)initWithSlices:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)sliceAtIndex:(long long)arg1;
- (unsigned long long)indexOfSlice:(id)arg1;
- (unsigned long long)sliceCount;
- (BOOL)containsURL:(id)arg1;
- (void)appendSlice:(id)arg1;
- (void)insertSlice:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeSlice:(id)arg1;
- (void)enumerateSlicesUsingBlock:(id /* block */)arg1;
- (void)removeAllSlices;
- (long long)durationUs;
- (id)description;
- (id)initWithString:(id)arg1;
- (void)setStartPosUs:(long long)arg1;
- (void)setSkipEndPosUs:(long long)arg1;
- (long long)startPosUs;
- (long long)skipEndPosUs;
- (long long)businessID;
- (void)setBusinessID:(long long)arg1;
- (id)source;
- (void)setSource:(id)arg1;
- (id)drmAsset;
- (void)setDrmAsset:(id)arg1;
- (id)slices;
- (void)setSlices:(id)arg1;
- (id)privateDelegate;
- (void)setPrivateDelegate:(id)arg1;
- (void).cxx_destruct;
@end
