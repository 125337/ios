@interface KSCrashReportInfo : NSObject
{
    NSString * _reportID; // +0x8
    NSDate * _creationDate; // +0x10
}
+ (id)reportInfoWithID:(id)arg1 creationDate:(id)arg2;
- (id)initWithID:(id)arg1 creationDate:(id)arg2;
- (long long)compare:(id)arg1;
- (id)reportID;
- (id)creationDate;
- (void).cxx_destruct;
@end

