@interface NativeBizCreationInfo : NSObject
{
    NSNumber * _redPoint; // +0x8
    NSString * _buffer; // +0x10
}
+ (id)makeWithRedPoint:(id)arg1 buffer:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)redPoint;
- (void)setRedPoint:(id)arg1;
- (id)buffer;
- (void)setBuffer:(id)arg1;
- (void).cxx_destruct;
@end
