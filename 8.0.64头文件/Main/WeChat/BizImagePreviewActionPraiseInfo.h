@interface BizImagePreviewActionPraiseInfo : NSObject
{
    NSNumber * _praiseStatus; // +0x8
}
+ (id)makeWithPraiseStatus:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)praiseStatus;
- (void)setPraiseStatus:(id)arg1;
- (void).cxx_destruct;
@end
