@interface LOTAnimatorNode : NSObject
{
    BOOL _pathShouldCacheLengths; // +0x8
    NSDictionary * _valueInterpolators; // +0x10
    NSString * _keyname; // +0x18
    NSNumber * _currentFrame; // +0x20
    LOTAnimatorNode * _inputNode; // +0x28
    LOTBezierPath * _localPath; // +0x30
    LOTBezierPath * _outputPath; // +0x38
}
- (id)initWithInputNode:(id)arg1 keyName:(id)arg2;
- (BOOL)needsUpdateForFrame:(id)arg1;
- (BOOL)updateWithFrame:(id)arg1;
- (BOOL)updateWithFrame:(id)arg1 withModifierBlock:(id /* block */)arg2 forceLocalUpdate:(BOOL)arg3;
- (void)forceSetCurrentFrame:(id)arg1;
- (void)logString:(id)arg1;
- (void)performLocalUpdate;
- (void)rebuildOutputs;
- (void)setPathShouldCacheLengths:(BOOL)arg1;
- (void)searchNodesForKeypath:(id)arg1;
- (void)setValueDelegate:(id)arg1 forKeypath:(id)arg2;
- (id)valueInterpolators;
- (id)keyname;
- (id)currentFrame;
- (id)inputNode;
- (id)localPath;
- (void)setLocalPath:(id)arg1;
- (id)outputPath;
- (void)setOutputPath:(id)arg1;
- (BOOL)pathShouldCacheLengths;
- (void).cxx_destruct;
@end

