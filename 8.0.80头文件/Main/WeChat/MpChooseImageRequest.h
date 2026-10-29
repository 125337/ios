@interface MpChooseImageRequest : NSObject
{
    NSNumber * _count; // +0x8
    NSArray * _sizeType; // +0x10
    NSArray * _sourceType; // +0x18
}
+ (id)makeWithCount:(id)arg1 sizeType:(id)arg2 sourceType:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)count;
- (void)setCount:(id)arg1;
- (id)sizeType;
- (void)setSizeType:(id)arg1;
- (id)sourceType;
- (void)setSourceType:(id)arg1;
- (void).cxx_destruct;
@end
