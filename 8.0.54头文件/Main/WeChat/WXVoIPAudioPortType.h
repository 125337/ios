@interface WXVoIPAudioPortType : NSObject
+ (id)unknownPortType;
+ (id)getOutputPortType:(id)arg1;
+ (id)getInUseOutputPortType;
+ (id)getInputPortType:(id)arg1;
+ (int)getOutputDeviceType:(id)arg1;
+ (int)getInputDeviceType:(id)arg1;
+ (BOOL)isInputHeadset:(id)arg1;
+ (BOOL)isOutputHeadset:(id)arg1;
+ (int)getInUsetPlayDeviceType;
@end

