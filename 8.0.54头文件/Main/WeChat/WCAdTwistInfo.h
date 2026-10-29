@interface WCAdTwistInfo : NSObject <NSCoding>
{
    BOOL _clockwise; // +0x8
    BOOL _showSimpleTransition; // +0x9
    unsigned long long _twistStartTime; // +0x10
    unsigned long long _twistEndTime; // +0x18
    unsigned long long _coverStartTime; // +0x20
    unsigned long long _coverEndTime; // +0x28
    unsigned long long _twistDegree; // +0x30
    NSString * _title; // +0x38
    NSString * _desc; // +0x40
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (unsigned long long)twistStartTime;
- (void)setTwistStartTime:(unsigned long long)arg1;
- (unsigned long long)twistEndTime;
- (void)setTwistEndTime:(unsigned long long)arg1;
- (unsigned long long)coverStartTime;
- (void)setCoverStartTime:(unsigned long long)arg1;
- (unsigned long long)coverEndTime;
- (void)setCoverEndTime:(unsigned long long)arg1;
- (unsigned long long)twistDegree;
- (void)setTwistDegree:(unsigned long long)arg1;
- (BOOL)clockwise;
- (void)setClockwise:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (BOOL)showSimpleTransition;
- (void)setShowSimpleTransition:(BOOL)arg1;
- (void).cxx_destruct;
@end

