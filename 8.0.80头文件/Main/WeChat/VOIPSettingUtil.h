@interface VOIPSettingUtil : NSObject
+ (int)getMicPortChange;
+ (id)getVoipSettingConfigRootDir;
+ (id)getVoipSettingConfinPath;
+ (id)getVoipSettingStaticCapPath;
+ (BOOL)saveParamsItem:(id)arg1 filePath:(id)arg2 paramFilter:(id)arg3;
+ (BOOL)saveParams:(id)arg1;
+ (BOOL)saveParamsStaticCab:(id)arg1;
+ (id)getParamOfKeyItem:(id)arg1 filePath:(id)arg2 defaultVal:(id)arg3;
+ (id)getParamOfKey:(id)arg1 defaultVal:(id)arg2;
+ (id)getParamOfKeyStaticCap:(id)arg1 defaultVal:(id)arg2;
+ (long long)FrontMicCheckAndSetConfig:(int)arg1 enbleConfig:(int)arg2 playVolume:(int)arg3;
+ (BOOL)changeVoipMicToRemoteIO;
@end
