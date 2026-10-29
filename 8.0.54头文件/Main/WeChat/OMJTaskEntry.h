@interface OMJTaskEntry : NSObject
{
    BOOL _isComplete; // +0x8
    BOOL _hasSubTask; // +0x9
    unsigned long long _identifier; // +0x10
    NSString * _name; // +0x18
    double _duration; // +0x20
    unsigned long long _traits; // +0x28
}
- (id)initWithIdentifier:(unsigned long long)arg1 name:(id)arg2 duration:(double)arg3 traits:(unsigned long long)arg4 isComplete:(BOOL)arg5 hasSubTask:(BOOL)arg6;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (unsigned long long)identifier;
- (id)name;
- (double)duration;
- (unsigned long long)traits;
- (BOOL)isComplete;
- (BOOL)hasSubTask;
- (void).cxx_destruct;
@end

