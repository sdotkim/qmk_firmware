SRC += memberizeme.c

TAP_DANCE_ENABLE = yes
LEADER_ENABLE = yes

ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
	SRC += tapdance.c
endif
