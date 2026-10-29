@interface MMWeakValue : NSObject
{
    id _nonretainedObjectValue; // +0x8
}
+ (id)valueWithNonretainedObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)nonretainedObjectValue;
- (void)setNonretainedObjectValue:(id)arg1;
- (void).cxx_destruct;
@end

