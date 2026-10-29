@interface TSRecord : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _reported; // +0x8
    long long _scene; // +0x10
    long long _action; // +0x18
    double _timestamp; // +0x20
    TSTrackedItem<TSFinalTrackedItem> * _item; // +0x28
    NSMutableDictionary * _externals; // +0x30
}
+ (BOOL)supportsSecureCoding;
- (id)userIdentifier;
- (void)setUserIdentifier:(id)arg1;
- (unsigned long long)interfaceType;
- (void)setInterfaceType:(unsigned long long)arg1;
- (unsigned long long)segmentIdentifier;
- (void)setSegmentIdentifier:(unsigned long long)arg1;
- (long long)positionCode;
- (void)setPositionCode:(long long)arg1;
- (id)passcodeContext;
- (void)setPasscodeContext:(id)arg1;
- (unsigned long long)passcodeType;
- (void)setPasscodeType:(unsigned long long)arg1;
- (BOOL)isGesturePasscode;
- (void)setIsGesturePasscode:(BOOL)arg1;
- (unsigned long long)ownerQueryType;
- (void)setOwnerQueryType:(unsigned long long)arg1;
- (unsigned long long)ownerPredictionResult;
- (void)setOwnerPredictionResult:(unsigned long long)arg1;
- (unsigned long long)ownerReport;
- (void)setOwnerReport:(unsigned long long)arg1;
- (id)attacker;
- (void)setAttacker:(id)arg1;
- (id)command;
- (void)setCommand:(id)arg1;
- (id)splitingPoints;
- (void)setSplitingPoints:(id)arg1;
- (id)userHeight;
- (void)setUserHeight:(id)arg1;
- (id)userWeight;
- (void)setUserWeight:(id)arg1;
- (id)userSex;
- (void)setUserSex:(id)arg1;
- (id)userAge;
- (void)setUserAge:(id)arg1;
- (id)marks;
- (void)setMarks:(id)arg1;
- (id)initWithTrackedItem:(id)arg1 scene:(long long)arg2 action:(long long)arg3 timestamp:(double)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (long long)action;
- (void)setAction:(long long)arg1;
- (double)timestamp;
- (void)setTimestamp:(double)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (BOOL)reported;
- (void)setReported:(BOOL)arg1;
- (id)externals;
- (void)setExternals:(id)arg1;
- (void).cxx_destruct;
@end
