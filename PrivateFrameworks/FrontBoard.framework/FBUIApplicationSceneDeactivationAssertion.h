/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBUIApplicationSceneDeactivationAssertion : NSObject <BSDescriptionProviding> {
    BOOL  _acquired;
    FBSDisplay * _display;
    id /* block */  _predicate;
    int  _reason;
    double  _sceneLevel;
}

@property (getter=isAcquired, nonatomic, readonly) BOOL acquired;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) FBSDisplay *display;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) id /* block */ predicate;
@property (nonatomic, readonly) int reason;
@property (nonatomic, readonly) double sceneLevel;
@property (readonly) Class superclass;

- (id)_initWithReason:(int)arg1 sceneLevel:(float)arg2 forDisplay:(id)arg3;
- (void)acquire;
- (void)acquireWithPredicate:(id /* block */)arg1;
- (void)acquireWithPredicate:(id /* block */)arg1 transitionContext:(id)arg2;
- (void)acquireWithTransitionContext:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)display;
- (id)initWithReason:(int)arg1;
- (id)initWithReason:(int)arg1 sceneLevel:(float)arg2;
- (BOOL)isAcquired;
- (id /* block */)predicate;
- (int)reason;
- (void)relinquish;
- (float)sceneLevel;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end