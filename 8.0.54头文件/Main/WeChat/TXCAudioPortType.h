@interface TXCAudioPortType : NSObject
+ (id)unknownPortType;
+ (id)getOutputPortType:(id)arg1;
+ (id)getInUseOutputPortType;
+ (id)getInputPortType:(id)arg1;
+ (int)getOutputDeviceType:(id)arg1;
+ (int)getOutputDeviceTypeWithPortString:(const void *)arg1;
+ (int)getInputDeviceType:(id)arg1;
+ (int)getInputDeviceTypeWithPortString:(const void *)arg1;
+ (int)getInUsePlayDeviceType;
@end

