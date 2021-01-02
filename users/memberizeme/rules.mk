LEADER_ENABLE = yes

SRC += memberizeme.c

ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
	SRC += tapdance.c
endif
