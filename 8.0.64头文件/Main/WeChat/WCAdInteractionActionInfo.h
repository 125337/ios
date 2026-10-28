@interface WCAdInteractionActionInfo : NSObject <NSCoding>
{
    NSString * _actionId; // +0x8
    unsigned long long _actionType; // +0x10
    NSString * _resourceId; // +0x18
    unsigned long long _drawType; // +0x20
    NSArray * _animations; // +0x28
    unsigned long long _gestureType; // +0x30
    unsigned long long _gestureOperateType; // +0x38
    unsigned long long _activityType; // +0x40
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)actionId;
- (void)setActionId:(id)arg1;
- (unsigned long long)actionType;
- (void)setActionType:(unsigned long long)arg1;
- (id)resourceId;
- (void)setResourceId:(id)arg1;
- (unsigned long long)drawType;
- (void)setDrawType:(unsigned long long)arg1;
- (id)animations;
- (void)setAnimations:(id)arg1;
- (unsigned long long)gestureType;
- (void)setGestureType:(unsigned long long)arg1;
- (unsigned long long)gestureOperateType;
- (void)setGestureOperateType:(unsigned long long)arg1;
- (unsigned long long)activityType;
- (void)setActivityType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
